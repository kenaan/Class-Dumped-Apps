//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "LolomoReusableView-Protocol.h"

@class LolomoListViewModel, NFUIRenderTimer, NSString, UIActivityIndicatorView, UILabel;
@protocol LolomoViewDelegate><LolomoActionDelegate;

@interface LolomoRowFooterReusableView : UICollectionReusableView <LolomoReusableView>
{
    _Bool _isForReuse;
    id <LolomoViewDelegate><LolomoActionDelegate> lolomoViewDelegate;
    LolomoListViewModel *_viewModel;
    NFUIRenderTimer *_renderTimer;
    UILabel *_labelView;
    UILabel *_arrowLabel;
    UIActivityIndicatorView *_spinner;
}

+ (id)dequeueForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2 withLolomoViewDelegate:(id)arg3;
+ (void)registerInCollectionView:(id)arg1 withLolomoViewDelegate:(id)arg2;
@property(nonatomic) __weak UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) __weak UILabel *arrowLabel; // @synthesize arrowLabel=_arrowLabel;
@property(nonatomic) __weak UILabel *labelView; // @synthesize labelView=_labelView;
@property(nonatomic) __weak NFUIRenderTimer *renderTimer; // @synthesize renderTimer=_renderTimer;
@property(nonatomic) __weak LolomoListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) _Bool isForReuse; // @synthesize isForReuse=_isForReuse;
@property(nonatomic) __weak id <LolomoViewDelegate><LolomoActionDelegate> lolomoViewDelegate; // @synthesize lolomoViewDelegate;
- (void).cxx_destruct;
- (void)didTapLabelWithGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
