//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESMMDeviceAuthor : NSObject
{
}

+ (id)getPortTypeInString;
+ (_Bool)deactiveAudioSession;
+ (_Bool)checkPlayBackCategory;
+ (_Bool)isMicNowAvailableV2;
+ (unsigned long long)reduceCategoryOption:(unsigned long long)arg1;
+ (_Bool)checkPlayBackAndRecordCategoryWithCategoryOption:(unsigned long long)arg1;
+ (_Bool)checkPlayBackAndRecordCategory;
+ (void)microphoneAuthorzied:(CDUnknownBlockType)arg1;
+ (void)cameraAuthorzied:(CDUnknownBlockType)arg1;
+ (void)setCustomPlayBackAndRecordCategoryOption:(unsigned long long)arg1;
+ (void)setCustomPlayBackCategoryOption:(unsigned long long)arg1;
+ (_Bool)isMicAuth;
+ (_Bool)isCameraAuth;

@end

