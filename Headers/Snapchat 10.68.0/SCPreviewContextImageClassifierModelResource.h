//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDownloadableContent.h"

#import "SCServerConfigListener-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSArray, NSObject, NSString, SCUserSession;
@protocol SCPreviewContextImageClassifierModelResourceDelegate;

@interface SCPreviewContextImageClassifierModelResource : SCDownloadableContent <SCServerConfigListener, SCUserSessionScoped>
{
    _Bool _didLoadMetadataForCurrentModel;
    NSString *_modelName;
    NSObject<SCPreviewContextImageClassifierModelResourceDelegate> *_delegate;
    SCUserSession *_userSession;
    NSArray *_labelNames;
    NSArray *_confidenceThresholds;
    NSArray *_meanAdjustment;
}

@property(retain, nonatomic) NSArray *meanAdjustment; // @synthesize meanAdjustment=_meanAdjustment;
@property(retain, nonatomic) NSArray *confidenceThresholds; // @synthesize confidenceThresholds=_confidenceThresholds;
@property(retain, nonatomic) NSArray *labelNames; // @synthesize labelNames=_labelNames;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool didLoadMetadataForCurrentModel; // @synthesize didLoadMetadataForCurrentModel=_didLoadMetadataForCurrentModel;
@property(retain, nonatomic) NSObject<SCPreviewContextImageClassifierModelResourceDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
- (void).cxx_destruct;
- (void)invalidate;
- (void)serverConfigDidChange:(id)arg1;
- (void)_updateModelNameDuringInit:(_Bool)arg1;
- (void)loadMetadata;
- (id)metadataPath;
- (id)modelPath;
- (id)metadataFilename;
- (id)modelFilename;
- (id)modelNameFromServer;
- (_Bool)isModelNameSet;
- (id)eventUniqueId;
- (id)resourceName;
- (id)fileNames;
- (id)directoryName;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

