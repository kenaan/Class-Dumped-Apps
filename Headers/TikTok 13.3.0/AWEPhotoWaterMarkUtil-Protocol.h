//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class NSString, UIImage;

@protocol AWEPhotoWaterMarkUtil <HTSService>
+ (void)addWaterMarkForSourceImage:(UIImage *)arg1 waterMarkImage:(UIImage *)arg2 completion:(void (^)(UIImage *))arg3;
+ (void)addWaterMarkForSourceImage:(UIImage *)arg1 waterMarkImageName:(NSString *)arg2 completion:(void (^)(UIImage *))arg3;
+ (void)addWaterMarkForSourceImage:(UIImage *)arg1 completion:(void (^)(UIImage *))arg2;
@end

