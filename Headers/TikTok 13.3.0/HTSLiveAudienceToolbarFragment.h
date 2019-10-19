//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveComponent-Protocol.h"
#import "HTSLiveToolbarProvider-Protocol.h"

@class HTSLiveToolbar, IESLiveComponentContext, LiveRoomModel, NSString;
@protocol HTSLiveViewHierarchyProvider, IESLiveAudienceTabContainerProvider;

@interface HTSLiveAudienceToolbarFragment : NSObject <HTSLiveToolbarProvider, HTSLiveComponent>
{
    _Bool _disableSmartLoad;
    LiveRoomModel *_room;
    IESLiveComponentContext *_componentContext;
    HTSLiveToolbar *_toolbar;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveAudienceTabContainerProvider> _tabContainerProvidor;
}

+ (long long)preferredLoadPhase;
+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
+ (_Bool)shouldCreateWithRoom:(id)arg1 componentContext:(id)arg2;
@property(nonatomic) _Bool disableSmartLoad; // @synthesize disableSmartLoad=_disableSmartLoad;
@property(nonatomic) __weak id <IESLiveAudienceTabContainerProvider> tabContainerProvidor; // @synthesize tabContainerProvidor=_tabContainerProvidor;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) HTSLiveToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) IESLiveComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
- (void).cxx_destruct;
- (_Bool)useGameMediaStyleLayout;
- (void)componentOrientationChanged:(long long)arg1;
- (void)hideComponent;
- (void)showComponent;
- (void)componentDidAppear;
- (void)componentDidUnmount;
- (void)componentDidMount;
- (void)componentsLoaded:(long long)arg1 manager:(id)arg2;
- (void)layoutToolbar;
- (void)updateToolbarMarginRight:(double)arg1;
- (void)hideToolbar;
- (void)showToolbar;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

