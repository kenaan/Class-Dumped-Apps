//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionSupplementaryViewProvider-Protocol.h"

@class NSString, UIView;
@protocol SPTCollectionEntityList, SPTCollectionSupplementaryViewProviderDelegate;

@interface SPTCollectionRecentlyPlayedSupplementaryViewProvider : NSObject <SPTCollectionSupplementaryViewProvider>
{
    id <SPTCollectionSupplementaryViewProviderDelegate> delegate;
    id <SPTCollectionEntityList> _model;
    UIView *_footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) id <SPTCollectionEntityList> model; // @synthesize model=_model;
@property(nonatomic) __weak id <SPTCollectionSupplementaryViewProviderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)registerTableReusableSectionViews:(id)arg1;
- (double)heightForTableHeaderView:(id)arg1 section:(long long)arg2;
- (id)provideTableSectionHeaderView:(id)arg1 section:(long long)arg2;
- (id)provideErrorView:(id)arg1 size:(struct CGSize)arg2;
- (id)provideTableHeaderView:(id)arg1;
- (id)provideTableFooterView:(id)arg1;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

