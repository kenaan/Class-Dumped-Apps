//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCActionModel, SCUnifiedProfileBadgeViewModel;

@interface SCUnifiedActionMenuTextItemViewModel : NSObject <NSCopying>
{
    _Bool _shouldCenterLabel;
    NSAttributedString *_attributedLabel;
    NSAttributedString *_subtitle;
    SCActionModel *_actionModel;
    SCUnifiedProfileBadgeViewModel *_badgeViewModel;
}

@property(readonly, copy, nonatomic) SCUnifiedProfileBadgeViewModel *badgeViewModel; // @synthesize badgeViewModel=_badgeViewModel;
@property(readonly, copy, nonatomic) SCActionModel *actionModel; // @synthesize actionModel=_actionModel;
@property(readonly, nonatomic) _Bool shouldCenterLabel; // @synthesize shouldCenterLabel=_shouldCenterLabel;
@property(readonly, copy, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSAttributedString *attributedLabel; // @synthesize attributedLabel=_attributedLabel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttributedLabel:(id)arg1 subtitle:(id)arg2 shouldCenterLabel:(_Bool)arg3 actionModel:(id)arg4 badgeViewModel:(id)arg5;

@end
