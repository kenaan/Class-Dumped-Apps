//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWECommerceAnchorTransitionViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CAShapeLayer, NSArray, NSString, UIButton, UILabel, UITableView, UIView;

@interface AWECommerceAnchorViewController : AWECommerceAnchorTransitionViewController <UITableViewDelegate, UITableViewDataSource>
{
    UIView *_contentView;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UITableView *_anchorTableView;
    UILabel *_tipLabel;
    CAShapeLayer *_contentShapeLayer;
}

@property(retain, nonatomic) CAShapeLayer *contentShapeLayer; // @synthesize contentShapeLayer=_contentShapeLayer;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UITableView *anchorTableView; // @synthesize anchorTableView=_anchorTableView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)maskColor;
- (_Bool)needInteractiveTransition;
- (double)offsetYInTransition;
- (id)animationViewInTransition;
@property(readonly, nonatomic) NSArray *publishAnchorArray;
- (void)closeButtonClicked:(id)arg1;
- (void)buildView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

