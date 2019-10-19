//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView;
@protocol IESLiveSettings;

@interface HTSLiveTagCollectionViewCell : UICollectionViewCell
{
    _Bool _newStyle;
    UILabel *_nameLabel;
    UIView *_gradientView;
    id <IESLiveSettings> _settings;
}

@property(nonatomic) _Bool newStyle; // @synthesize newStyle=_newStyle;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)updateWithTagName:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

