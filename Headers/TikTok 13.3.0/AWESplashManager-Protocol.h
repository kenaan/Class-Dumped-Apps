//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class AWESplashConfig, NSString, UIImage;

@protocol AWESplashManager <HTSService>
@property(nonatomic) _Bool forceIgnoreCurrentShow;
- (UIImage *)awesplash_imageNamed:(NSString *)arg1;
- (_Bool)isUserTappedOnSplash;
- (_Bool)isSplashShown;
- (_Bool)isSplashShowing;
- (void)setupWithConfig:(AWESplashConfig *)arg1;
@end

