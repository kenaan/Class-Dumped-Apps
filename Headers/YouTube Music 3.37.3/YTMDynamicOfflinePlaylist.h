//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTDynamicOfflinePlaylist.h"

@class GIMMe, NSArray;

@interface YTMDynamicOfflinePlaylist : YTDynamicOfflinePlaylist
{
    GIMMe *_gimme;
    NSArray *_thumbnailURLsForQuiltArt;
}

+ (id)thumbnailURLsFromOfflineVideos:(id)arg1;
@property(retain, nonatomic) NSArray *thumbnailURLsForQuiltArt; // @synthesize thumbnailURLsForQuiltArt=_thumbnailURLsForQuiltArt;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)ytm_quiltArtThumbnail;
- (id)initWithVideos:(id)arg1;

@end
