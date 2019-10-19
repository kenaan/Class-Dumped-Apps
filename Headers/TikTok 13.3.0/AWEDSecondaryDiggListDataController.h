//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

#import "AWESecondaryDiggListDataControllerProtocol-Protocol.h"

@class NSString;

@interface AWEDSecondaryDiggListDataController : AWEListDataController <AWESecondaryDiggListDataControllerProtocol>
{
    _Bool _hasMore;
    long long _total;
    NSString *_noticeID;
    long long _maxCursor;
    long long _minCursor;
}

@property(nonatomic) long long minCursor; // @synthesize minCursor=_minCursor;
@property(nonatomic) long long maxCursor; // @synthesize maxCursor=_maxCursor;
@property(copy, nonatomic) NSString *noticeID; // @synthesize noticeID=_noticeID;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;
- (id)getParams;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithNoticeID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

