//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CommentsFooterBarViewDelegate-Protocol.h"

@class ASCollectionNode, BaseView, CommentsFooterBarView, FloatingHeaderManager, NSLayoutConstraint, NSString, Post, PostDetailPresenter, UICollectionView;
@protocol CommentsFooterBarViewDelegate;

@interface PostDetailFooterViewController : UIViewController <CommentsFooterBarViewDelegate>
{
    _Bool _hasAddedObservers;
    ASCollectionNode *_collectionNode;
    PostDetailPresenter *_presenter;
    CommentsFooterBarView *_replyFooterBarView;
    FloatingHeaderManager *_footerBarFloatingManager;
    NSLayoutConstraint *_replyFooterBarViewOffsetConstraint;
    BaseView *_safeAreaFooterView;
    id <CommentsFooterBarViewDelegate> _delegate;
    struct UIEdgeInsets _safeAreaInsets;
    struct UIEdgeInsets _windowSafeAreaInsets;
}

@property(nonatomic) _Bool hasAddedObservers; // @synthesize hasAddedObservers=_hasAddedObservers;
@property(nonatomic) __weak id <CommentsFooterBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BaseView *safeAreaFooterView; // @synthesize safeAreaFooterView=_safeAreaFooterView;
@property(nonatomic) struct UIEdgeInsets windowSafeAreaInsets; // @synthesize windowSafeAreaInsets=_windowSafeAreaInsets;
@property(retain, nonatomic) NSLayoutConstraint *replyFooterBarViewOffsetConstraint; // @synthesize replyFooterBarViewOffsetConstraint=_replyFooterBarViewOffsetConstraint;
@property(retain, nonatomic) FloatingHeaderManager *footerBarFloatingManager; // @synthesize footerBarFloatingManager=_footerBarFloatingManager;
@property(retain, nonatomic) CommentsFooterBarView *replyFooterBarView; // @synthesize replyFooterBarView=_replyFooterBarView;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
@property(nonatomic) __weak PostDetailPresenter *presenter; // @synthesize presenter=_presenter;
@property(nonatomic) __weak ASCollectionNode *collectionNode; // @synthesize collectionNode=_collectionNode;
- (void).cxx_destruct;
- (void)createReplyFooterBarView;
- (void)createSafeAreaFooterView;
- (void)commentsFooterBarViewDidTapButton:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateFooterView;
- (void)didMoveToParentViewController:(id)arg1;
- (void)addObservers;
- (void)configureWithPresenter:(id)arg1 collectionNode:(id)arg2;
- (void)viewDidLoad;
@property(readonly, nonatomic) _Bool shouldHideCommentBar;
- (void)dealloc;
@property(readonly, nonatomic) double footerBarViewHeight;
@property(readonly, nonatomic) UICollectionView *feedCollectionView;
@property(readonly, nonatomic) Post *post;
- (double)bottomInset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

