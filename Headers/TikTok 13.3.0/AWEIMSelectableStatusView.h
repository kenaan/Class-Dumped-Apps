//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UILabel;

@interface AWEIMSelectableStatusView : UIView
{
    unsigned long long _status;
    long long _number;
    UIImageView *_unselectImageView;
    UILabel *_numberLabel;
    UIImageView *_selectImageView;
    UIImage *_selectImage;
}

@property(retain, nonatomic) UIImage *selectImage; // @synthesize selectImage=_selectImage;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UIImageView *unselectImageView; // @synthesize unselectImageView=_unselectImageView;
@property(nonatomic) long long number; // @synthesize number=_number;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)setSelect:(unsigned long long)arg1 number:(long long)arg2 animated:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 withUnselectImage:(id)arg2 withSelectImage:(id)arg3;

@end

