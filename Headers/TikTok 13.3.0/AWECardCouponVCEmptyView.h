//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWERxObservable, AWERxProperty;

@interface AWECardCouponVCEmptyView : UIView
{
    AWERxProperty *_showEmptyView;
    AWERxObservable *_invalidEntryClicked;
}

@property(retain, nonatomic) AWERxObservable *invalidEntryClicked; // @synthesize invalidEntryClicked=_invalidEntryClicked;
@property(retain, nonatomic) AWERxProperty *showEmptyView; // @synthesize showEmptyView=_showEmptyView;
- (void).cxx_destruct;
- (void)invalidEntryClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;

@end

