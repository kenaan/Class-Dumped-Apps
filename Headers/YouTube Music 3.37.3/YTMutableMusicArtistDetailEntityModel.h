//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMusicArtistDetailEntityModel.h"

#import "YTMutableEntity-Protocol.h"

@class NSData, NSDictionary, NSString, YTMusicArtistEntityModel;

@interface YTMutableMusicArtistDetailEntityModel : YTMusicArtistDetailEntityModel <YTMutableEntity>
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setMetadata:(id)arg1;
- (void)setData:(id)arg1;
@property(retain, nonatomic) NSString *description_p; // @dynamic description_p;
@property(retain, nonatomic) YTMusicArtistEntityModel *parentArtist; // @dynamic parentArtist;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(readonly, copy, nonatomic) NSData *entityVersion;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
@property(readonly) Class superclass;

@end

