//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface NFUILolomoViewModelsBuilder : NSObject
{
    NSDictionary *_listViewModelClassMap;
    NSDictionary *_itemViewModelClassMap;
}

@property(retain, nonatomic) NSDictionary *itemViewModelClassMap; // @synthesize itemViewModelClassMap=_itemViewModelClassMap;
@property(retain, nonatomic) NSDictionary *listViewModelClassMap; // @synthesize listViewModelClassMap=_listViewModelClassMap;
- (void).cxx_destruct;
- (id)defaultLolomoViewConfig;
- (void)registerViewModelsToClassMaps;
- (id)listViewModelForListContext:(id)arg1 dataList:(id)arg2 config:(id)arg3 index:(long long)arg4;
- (id)evaulateListsWithRequest:(id)arg1 dataLists:(id)arg2 gallery:(_Bool)arg3 config:(id)arg4;
- (id)dataListsFrom:(id)arg1 lolomoId:(id)arg2 request:(id)arg3;
- (id)configureViewModelWithContext:(id)arg1 request:(id)arg2;
- (id)init;

@end

