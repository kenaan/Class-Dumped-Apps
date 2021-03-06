//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseDataObject.h"

@class NSArray, NSString, UIImage;

@interface FVRCategoryItem : FVRBaseDataObject
{
    NSArray *_subCategories;
    NSString *_name;
    long long _categoryId;
    NSString *_imageUrl;
    UIImage *_iconImage;
    NSString *_subtitle;
}

@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *subCategories; // @synthesize subCategories=_subCategories;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getIconImage;
- (id)initWithElement:(id)arg1;

@end

