//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBCarPlayApplicationSceneLayoutElementViewController.h"

#import "SBSceneHandleObserver.h"

@class CPSOverlayViewController, CPSTemplateConnectionManager, NSString, UIView;

@interface SBStarkMapsTemplateUILayoutElementViewController : SBCarPlayApplicationSceneLayoutElementViewController <SBSceneHandleObserver>
{
    CPSOverlayViewController *_currentOverlayViewController;
    CPSTemplateConnectionManager *_templateConnectionManager;
    UIView *_currentHostView;
}

- (void).cxx_destruct;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)_tearDownHostView;
- (void)_setupHostView;
- (void)_setOverlayViewController:(id)arg1;
- (void)invalidate;
- (void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(struct CGRect)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

