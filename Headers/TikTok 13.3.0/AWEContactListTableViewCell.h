//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEUIListTableViewCell.h"

@interface AWEContactListTableViewCell : AWEUIListTableViewCell
{
}

+ (double)sugguestHeight;
+ (double)suggestedHeight;
+ (long long)cellType;
- (_Bool)isInUnifyNicknameGroup;
- (void)addHightlightWithAttributeString:(id)arg1 prefixLength:(long long)arg2 positions:(id)arg3;
- (id)positionWithRange:(struct _NSRange)arg1;
- (void)configWithModel:(id)arg1 isFriend:(_Bool)arg2 isHightLight:(_Bool)arg3;
- (void)prepareForReuse;
- (void)_setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
