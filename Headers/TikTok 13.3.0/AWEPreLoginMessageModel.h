//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface AWEPreLoginMessageModel : NSObject
{
    CDUnknownBlockType _loginBlock;
    NSString *_pageTitle;
    NSString *_indicatorText;
    UIImage *_indicatorImage;
}

@property(retain, nonatomic) UIImage *indicatorImage; // @synthesize indicatorImage=_indicatorImage;
@property(copy, nonatomic) NSString *indicatorText; // @synthesize indicatorText=_indicatorText;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(copy, nonatomic) CDUnknownBlockType loginBlock; // @synthesize loginBlock=_loginBlock;
- (void).cxx_destruct;

@end

