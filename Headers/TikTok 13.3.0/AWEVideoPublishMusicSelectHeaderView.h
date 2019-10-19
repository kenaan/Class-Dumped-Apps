//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class AWEMusicEditorCollectionHeaderView, UIImageView, UILabel;
@protocol AWEVideoPublishMusicSelectHeaderViewDelegate;

@interface AWEVideoPublishMusicSelectHeaderView : UICollectionReusableView
{
    id <AWEVideoPublishMusicSelectHeaderViewDelegate> _delegate;
    UIImageView *_imageView;
    UILabel *_label;
    AWEMusicEditorCollectionHeaderView *_dotSeparatorView;
}

@property(retain, nonatomic) AWEMusicEditorCollectionHeaderView *dotSeparatorView; // @synthesize dotSeparatorView=_dotSeparatorView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <AWEVideoPublishMusicSelectHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapped:(id)arg1;
- (void)updateImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

