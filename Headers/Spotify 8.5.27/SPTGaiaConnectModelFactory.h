//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTGaiaConnectModelFactory : NSObject
{
}

+ (void)coreCredentialsFromData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)incarnationsFromArray:(id)arg1;
+ (id)deviceFromArray:(id)arg1 withIdentifier:(id)arg2;
+ (id)transferErrorFromRawState:(id)arg1 withDevices:(id)arg2;
+ (id)devicesFromRawState:(id)arg1 onboardingId:(id)arg2;
+ (double)deviceVolumeFromData:(id)arg1;
+ (void)internalStateFromData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

