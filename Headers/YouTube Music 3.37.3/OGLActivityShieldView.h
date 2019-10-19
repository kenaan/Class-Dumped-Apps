//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QTMActivityIndicator, UILabel;

@interface OGLActivityShieldView : UIView
{
    UILabel *_captionLabel;
    QTMActivityIndicator *_activityIndicator;
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) QTMActivityIndicator *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
- (void).cxx_destruct;
- (id)bestGuessViewWithTopViewController:(id)arg1;
- (id)bestGuessView;
- (void)stopAndRemoveFromParentView;
- (void)displayAndAnimateInView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
