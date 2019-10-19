//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSMutableArray, UIImageView;

@interface AWETabbarMessageBubbleView : UIView
{
    NSDictionary *_modelDic;
    NSMutableArray *_itemArray;
    UIView *_bubbleBackView;
    UIView *_shadowView;
    UIImageView *_bubbleSmallTriangleView;
    NSArray *_iconArray;
    NSArray *_numberLabelArray;
}

@property(retain, nonatomic) NSArray *numberLabelArray; // @synthesize numberLabelArray=_numberLabelArray;
@property(retain, nonatomic) NSArray *iconArray; // @synthesize iconArray=_iconArray;
@property(retain, nonatomic) UIImageView *bubbleSmallTriangleView; // @synthesize bubbleSmallTriangleView=_bubbleSmallTriangleView;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *bubbleBackView; // @synthesize bubbleBackView=_bubbleBackView;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(retain, nonatomic) NSDictionary *modelDic; // @synthesize modelDic=_modelDic;
- (void).cxx_destruct;
- (void)dismiss;
- (void)stopAnimation:(CDUnknownBlockType)arg1;
- (void)startAnimation:(CDUnknownBlockType)arg1;
- (void)adjustFrameWithCenterX:(double)arg1;
- (void)makeCeilingFrameForView:(id)arg1;
- (void)getItemArrayByModelDic:(id)arg1 orders:(id)arg2;
- (void)setup;
- (id)initWithModelDic:(id)arg1;

@end

