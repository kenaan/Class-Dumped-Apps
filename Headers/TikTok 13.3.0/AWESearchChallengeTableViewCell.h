//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEUIListTableViewCell.h"

@class NSArray;

@interface AWESearchChallengeTableViewCell : AWEUIListTableViewCell
{
    NSArray *_hightlightPositions;
}

+ (long long)cellType;
+ (double)cellHeight;
+ (id)identifier;
@property(retain, nonatomic) NSArray *hightlightPositions; // @synthesize hightlightPositions=_hightlightPositions;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
- (id)initWithCellType:(long long)arg1 cellStyle:(long long)arg2 reuseIdentifier:(id)arg3;

@end

