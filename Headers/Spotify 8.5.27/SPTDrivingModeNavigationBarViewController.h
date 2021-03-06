//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingContainedViewController-Protocol.h"
#import "SPTNowPlayingNavigationBarModelObserver-Protocol.h"

@class NSString, SPTDrivingModeLogger, SPTDrivingModeNavigationBarView;
@protocol SPTDrivingModeContextMenuFactory, SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingContainingViewController, SPTNowPlayingNavigationBarModel;

@interface SPTDrivingModeNavigationBarViewController : UIViewController <SPTNowPlayingNavigationBarModelObserver, SPTNowPlayingContainedViewController>
{
    id <SPTNowPlayingNavigationBarModel> _navigationBarModel;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    id <SPTDrivingModeContextMenuFactory> _contextMenuFactory;
    SPTDrivingModeLogger *_logger;
}

@property(readonly, nonatomic) __weak SPTDrivingModeLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTDrivingModeContextMenuFactory> contextMenuFactory; // @synthesize contextMenuFactory=_contextMenuFactory;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(readonly, nonatomic) id <SPTNowPlayingNavigationBarModel> navigationBarModel; // @synthesize navigationBarModel=_navigationBarModel;
- (void).cxx_destruct;
- (void)navigationBarModelStateDidChange:(id)arg1;
- (void)rightButtonPressed:(id)arg1;
- (struct CGSize)preferredContentSizeForContainerSize:(struct CGSize)arg1;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)updateNavigationBar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithNavigationBarModel:(id)arg1 auxiliaryActionsHandler:(id)arg2 contextMenuFactory:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTDrivingModeNavigationBarView *view; // @dynamic view;

@end

