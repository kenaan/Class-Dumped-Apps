//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveComponent-Protocol.h"

@class HTSEventContext, HTSLivePopupWebViewModel, NSString;
@protocol HTSLiveViewHierarchyProvider, IESLiveInternalRouter, IESLiveToastFactory, IESLiveUserService;

@interface HTSLivePopupWebViewFragment : NSObject <HTSLiveComponent>
{
    HTSEventContext *_trackContext;
    HTSLivePopupWebViewModel *_viewModel;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveUserService> _userService;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveInternalRouter> _internalRouter;
}

+ (long long)preferredLoadPhase;
+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
@property(retain, nonatomic) id <IESLiveInternalRouter> internalRouter; // @synthesize internalRouter=_internalRouter;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(nonatomic) __weak id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(nonatomic) __weak id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) HTSLivePopupWebViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
- (void).cxx_destruct;
- (void)bindViewModel;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

