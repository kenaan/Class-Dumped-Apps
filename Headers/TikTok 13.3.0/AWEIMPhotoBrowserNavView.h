//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEIMSelectableStatusView, UIButton;

@interface AWEIMPhotoBrowserNavView : UIView
{
    UIButton *_backButton;
    AWEIMSelectableStatusView *_selectableStatusView;
    UIView *_touchView;
    CDUnknownBlockType _backBlock;
    CDUnknownBlockType _selectAreaTappedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType selectAreaTappedBlock; // @synthesize selectAreaTappedBlock=_selectAreaTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
@property(retain, nonatomic) UIView *touchView; // @synthesize touchView=_touchView;
@property(retain, nonatomic) AWEIMSelectableStatusView *selectableStatusView; // @synthesize selectableStatusView=_selectableStatusView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)setSelect:(unsigned long long)arg1 number:(long long)arg2 animated:(_Bool)arg3;
- (void)tapGR:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
