//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

@interface AWEUICommonSearchBarConfig : NSObject
{
    UIColor *_backgroundColor;
    UIColor *_textColor;
    UIColor *_tintColor;
    UIColor *_searchFiledBackgroundColor;
    UIImage *_lensImage;
    UIImage *_clearImage;
    double _searchBarHeight;
    UIColor *_lensImageTintColor;
}

+ (id)sharedConfig;
@property(retain, nonatomic) UIColor *lensImageTintColor; // @synthesize lensImageTintColor=_lensImageTintColor;
@property(nonatomic) double searchBarHeight; // @synthesize searchBarHeight=_searchBarHeight;
@property(retain, nonatomic) UIImage *clearImage; // @synthesize clearImage=_clearImage;
@property(retain, nonatomic) UIImage *lensImage; // @synthesize lensImage=_lensImage;
@property(retain, nonatomic) UIColor *searchFiledBackgroundColor; // @synthesize searchFiledBackgroundColor=_searchFiledBackgroundColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)init;

@end

