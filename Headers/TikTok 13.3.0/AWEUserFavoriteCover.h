//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEURLModel, NSString, UIImage;

@interface AWEUserFavoriteCover : NSObject
{
    AWEURLModel *_url;
    UIImage *_defaultImg;
    NSString *_desc;
    id _rawModel;
}

@property(retain, nonatomic) id rawModel; // @synthesize rawModel=_rawModel;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) UIImage *defaultImg; // @synthesize defaultImg=_defaultImg;
@property(retain, nonatomic) AWEURLModel *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithUrl:(id)arg1 defaultImg:(id)arg2 desc:(id)arg3 rawModel:(id)arg4;

@end
