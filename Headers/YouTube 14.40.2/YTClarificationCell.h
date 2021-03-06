//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "YTCellActionProtocol.h"
#import "YTCollectionViewCellProtocol.h"
#import "YTCustomInsetsCell.h"
#import "YTThumbnailMapping.h"

@class NSString, YTClarificationView;

@interface YTClarificationCell : YTCollectionViewCell <YTCellActionProtocol, YTCollectionViewCellProtocol, YTCustomInsetsCell, YTThumbnailMapping>
{
    YTClarificationView *_clarificationView;
    _Bool _shouldLayoutForMetadataPanel;
    id <YTResponder> _parentResponder;
}

+ (struct UIEdgeInsets)customSectionInsetForInset:(struct UIEdgeInsets)arg1;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (id)thumbnailMappings;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

