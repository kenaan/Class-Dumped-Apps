//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCNMessagingMessagingServiceParameters, SCNMessagingTweaks, SCNMessagingUUID;

@interface SCNMessagingStatelessSessionParameters : NSObject
{
    _Bool _debug;
    SCNMessagingMessagingServiceParameters *_messagingServiceParameters;
    SCNMessagingUUID *_userId;
    SCNMessagingTweaks *_tweaks;
    NSString *_sharedStorageRoot;
}

+ (id)StatelessSessionParametersWithMessagingServiceParameters:(id)arg1 userId:(id)arg2 debug:(_Bool)arg3 tweaks:(id)arg4 sharedStorageRoot:(id)arg5;
@property(readonly, nonatomic) NSString *sharedStorageRoot; // @synthesize sharedStorageRoot=_sharedStorageRoot;
@property(readonly, nonatomic) SCNMessagingTweaks *tweaks; // @synthesize tweaks=_tweaks;
@property(readonly, nonatomic) _Bool debug; // @synthesize debug=_debug;
@property(readonly, nonatomic) SCNMessagingUUID *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) SCNMessagingMessagingServiceParameters *messagingServiceParameters; // @synthesize messagingServiceParameters=_messagingServiceParameters;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMessagingServiceParameters:(id)arg1 userId:(id)arg2 debug:(_Bool)arg3 tweaks:(id)arg4 sharedStorageRoot:(id)arg5;

@end

