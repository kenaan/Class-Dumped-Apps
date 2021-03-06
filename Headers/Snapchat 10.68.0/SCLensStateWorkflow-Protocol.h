//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCameraViewControllerLensStateDelegate-Protocol.h"

@class SCLens;
@protocol SCLensStateWorkflowDelegate;

@protocol SCLensStateWorkflow <SCCameraViewControllerLensStateDelegate>
@property(nonatomic) __weak id <SCLensStateWorkflowDelegate> delegate;
- (void)clearLensState;
- (void)saveLensState;
- (void)resetLensStateForce:(_Bool)arg1;
- (void)restoreOrRecreateStateForLens:(SCLens *)arg1;
- (long long)currentLensSource;
- (void)beginLensStateForLensSource:(long long)arg1;
@end

