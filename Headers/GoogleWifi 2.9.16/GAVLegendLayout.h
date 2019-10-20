//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAVUIView.h"

#import "GAVLegendLayout-Protocol.h"

@class NSArray;
@protocol GAVLegend;

@interface GAVLegendLayout : GAVUIView <GAVLegendLayout>
{
    double _maxWidthPercentage;
    long long _verticalAlignment;
    id <GAVLegend> _legend;
    NSArray *_legendItems;
}

@property(retain, nonatomic) NSArray *legendItems; // @synthesize legendItems=_legendItems;
@property(nonatomic) __weak id <GAVLegend> legend; // @synthesize legend=_legend;
- (void).cxx_destruct;
- (double)legendHeight;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 contentRect:(struct CGRect)arg2 maxWidthRatio:(id)arg3 verticalAlignment:(long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1 contentRect:(struct CGRect)arg2;

@end
