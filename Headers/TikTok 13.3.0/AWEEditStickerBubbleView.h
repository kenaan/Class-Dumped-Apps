//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEEditStickerBubbleProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIImageView, UITableView;

@interface AWEEditStickerBubbleView : UIView <AWEEditStickerBubbleProtocol, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _bubbleVisible;
    _Bool _isUpsideDown;
    NSArray *_bubbleItems;
    unsigned long long _arrowDirection;
    UITableView *_tableView;
    UIImageView *_arrowImageView;
    NSArray *_transformedRectCornerPoints;
    double _arrowOffset;
    UIView *_parentView;
    struct CGPoint _touchPoint;
    struct CGAffineTransform _anchorViewTransform;
}

@property(nonatomic) struct CGPoint touchPoint; // @synthesize touchPoint=_touchPoint;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) struct CGAffineTransform anchorViewTransform; // @synthesize anchorViewTransform=_anchorViewTransform;
@property(nonatomic) _Bool isUpsideDown; // @synthesize isUpsideDown=_isUpsideDown;
@property(copy, nonatomic) NSArray *transformedRectCornerPoints; // @synthesize transformedRectCornerPoints=_transformedRectCornerPoints;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic, getter=isBubbleVisible) _Bool bubbleVisible; // @synthesize bubbleVisible=_bubbleVisible;
@property(copy, nonatomic) NSArray *bubbleItems; // @synthesize bubbleItems=_bubbleItems;
- (void).cxx_destruct;
@property(readonly, nonatomic) double calcMaxWidth;
- (struct CGRect)parentViewFrame;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateArrowDirection;
- (void)update;
- (void)setRect:(struct CGRect)arg1 touchPoint:(struct CGPoint)arg2 transform:(struct CGAffineTransform)arg3 inParentView:(id)arg4;
- (void)setBubbleVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)getRotateYOffsetWith:(double)arg1;
- (double)getRotateXOffsetWith:(double)arg1;
- (double)getRotateRectWidth;
- (struct CGPoint)getShowLocation;
- (id)getTransformedFloatsOfRect:(struct CGRect)arg1 transform:(struct CGAffineTransform)arg2;
- (struct CGPoint)mockAnchorPoint:(struct CGPoint)arg1 forDirection:(unsigned long long)arg2;
- (struct CGPoint)fixBubbleVerticalLocationWithPoint:(struct CGPoint)arg1;
- (struct CGPoint)fixBubbleHorizontalLocationWithPoint:(struct CGPoint)arg1;
- (struct CGPoint)fixBubbleLocationWithPoint:(struct CGPoint)arg1;
- (struct CGPoint)fixBubbleLocation;
- (_Bool)noEnoughSpaceForRect:(struct CGRect)arg1;
- (_Bool)noSpaceLeft;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

