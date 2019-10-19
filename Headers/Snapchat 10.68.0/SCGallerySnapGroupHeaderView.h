//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "SCGalleryViewHeaderSelecting-Protocol.h"

@class NSString, SCGallerySnapGroupViewModel, SCUserSession, UIButton, UILabel;
@protocol SCGallerySnapGroupHeaderViewDelegate;

@interface SCGallerySnapGroupHeaderView : UICollectionReusableView <SCGalleryViewHeaderSelecting>
{
    SCGallerySnapGroupViewModel *_viewModel;
    UILabel *_dateLabel;
    UILabel *_locationLabel;
    UIButton *_selectButton;
    SCUserSession *_userSession;
    _Bool _selectMode;
    _Bool _selected;
    id <SCGallerySnapGroupHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGallerySnapGroupHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool selectMode; // @synthesize selectMode=_selectMode;
- (void).cxx_destruct;
- (void)updateSelectionState;
- (void)_toggleSelectAll;
- (void)_updateLocation;
- (void)setViewModel:(id)arg1 userSession:(id)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
