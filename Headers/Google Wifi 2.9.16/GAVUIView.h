//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GAVUIMargin, UILabel;

@interface GAVUIView : UIView
{
    UILabel *_nameLabel;
    struct CGRect _contentRect;
}

@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)translateView:(id)arg1;
- (void)translateAndAddSubview:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGPoint contentCenter;
@property(readonly, nonatomic) GAVUIMargin *margin;
- (id)initWithFrame:(struct CGRect)arg1 contentRect:(struct CGRect)arg2;

@end

