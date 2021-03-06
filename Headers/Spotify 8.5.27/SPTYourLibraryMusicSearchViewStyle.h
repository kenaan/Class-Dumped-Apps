//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, UIColor, UIFont;
@protocol SPTSortingFilteringSearchFieldStyle;

@interface SPTYourLibraryMusicSearchViewStyle : NSObject <GLUEStyle>
{
    id <SPTSortingFilteringSearchFieldStyle> _searchFieldStyle;
    UIColor *_backgroundColor;
    UIFont *_cancelButtonFont;
    UIColor *_cancelButtonTextColor;
    double _itemSpacing;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(copy, nonatomic) UIColor *cancelButtonTextColor; // @synthesize cancelButtonTextColor=_cancelButtonTextColor;
@property(copy, nonatomic) UIFont *cancelButtonFont; // @synthesize cancelButtonFont=_cancelButtonFont;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) id <SPTSortingFilteringSearchFieldStyle> searchFieldStyle; // @synthesize searchFieldStyle=_searchFieldStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

