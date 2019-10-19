//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWEGurdModuleService-Protocol.h"

@class NSString;

@interface AWEGurdModuleService : HTSService <AWEGurdModuleService>
{
}

+ (void)registerChannels:(id)arg1 forAccessKey:(id)arg2;
+ (void)registerChannels:(id)arg1;
- (void)syncResourcesForAccessKey:(id)arg1 channels:(id)arg2 businessDomain:(id)arg3 resourceVersion:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)syncResourcesForAccessKey:(id)arg1 channels:(id)arg2 businessDomain:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)syncResourcesWithChannels:(id)arg1 businessDomain:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)enableGurd;
- (long long)fileTypeForAccessKey:(id)arg1 channel:(id)arg2;
- (id)rootDirectoryForAccessKey:(id)arg1 channel:(id)arg2;
- (id)rootDirectoryForChannel:(id)arg1;
- (id)rootDirectoryForAccessKey:(id)arg1;
- (void)enqueueSyncResourcesTask:(id)arg1;
- (void)syncResourcesForAccessKey:(id)arg1 channels:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncResourcesChannels:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncResourcesIfNeeded;
- (id)accessKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

