//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEAwemeModel, AWEFeedAnchorContainerView, UIView;
@protocol AWEAnchorViewConfigDelegate;

@interface AWEFeedAnchorViewManager : NSObject
{
    long long _priorityType;
    id <AWEAnchorViewConfigDelegate> _delegate;
    AWEAwemeModel *_awemeModel;
    AWEFeedAnchorContainerView *_anchorContainerView;
    UIView *_childView;
}

+ (id)componentViewManagerWithAwemeModel:(id)arg1 sceneType:(long long)arg2;
@property(nonatomic) __weak UIView *childView; // @synthesize childView=_childView;
@property(retain, nonatomic) AWEFeedAnchorContainerView *anchorContainerView; // @synthesize anchorContainerView=_anchorContainerView;
@property(retain, nonatomic) AWEAwemeModel *awemeModel; // @synthesize awemeModel=_awemeModel;
@property(nonatomic) __weak id <AWEAnchorViewConfigDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priorityType; // @synthesize priorityType=_priorityType;
- (void).cxx_destruct;
- (void)showOrHideAnchorView:(_Bool)arg1;
- (_Bool)shouldShowAnchorView;
- (void)layoutAnchorView;
- (void)updateAnchorView;
- (void)configWithAwemeModel:(id)arg1 sceneType:(long long)arg2;

@end

