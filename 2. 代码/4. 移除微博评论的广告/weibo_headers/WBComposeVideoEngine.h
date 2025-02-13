//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SNHTTPRequestOperationWrapper;

@interface WBComposeVideoEngine : NSObject
{
    SNHTTPRequestOperationWrapper *_videoAlbumsRequestWrapper;
    SNHTTPRequestOperationWrapper *_videoCategorysRequestWrapper;
    SNHTTPRequestOperationWrapper *_videoChannelRequestWrapper;
    SNHTTPRequestOperationWrapper *_videoRecomTagRequestWrapper;
    unsigned long long _videoAlbumState;
    NSArray *_videoAlbumArray;
    NSArray *_videoCategoryArray;
    NSDictionary *_videChannelInfo;
    NSString *_videoContribueTipText;
    unsigned long long _recomTagState;
    NSString *_recomTrans;
    NSArray *_videoRecomTags;
    NSArray *_videoActTags;
    NSMutableDictionary *_videoCategoryArrayCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *videoCategoryArrayCache; // @synthesize videoCategoryArrayCache=_videoCategoryArrayCache;
@property(retain, nonatomic) NSArray *videoActTags; // @synthesize videoActTags=_videoActTags;
@property(retain, nonatomic) NSArray *videoRecomTags; // @synthesize videoRecomTags=_videoRecomTags;
@property(retain, nonatomic) NSString *recomTrans; // @synthesize recomTrans=_recomTrans;
@property(nonatomic) unsigned long long recomTagState; // @synthesize recomTagState=_recomTagState;
@property(retain, nonatomic) NSString *videoContribueTipText; // @synthesize videoContribueTipText=_videoContribueTipText;
@property(retain, nonatomic) NSDictionary *videChannelInfo; // @synthesize videChannelInfo=_videChannelInfo;
@property(retain, nonatomic) NSArray *videoCategoryArray; // @synthesize videoCategoryArray=_videoCategoryArray;
@property(retain, nonatomic) NSArray *videoAlbumArray; // @synthesize videoAlbumArray=_videoAlbumArray;
@property(nonatomic) unsigned long long videoAlbumState; // @synthesize videoAlbumState=_videoAlbumState;
- (void).cxx_destruct;
- (_Bool)requestRecomTagWithTitle:(id)arg1 playlistInfo:(id)arg2;
@property(readonly, nonatomic) unsigned long long videoChannelState;
- (void)requestVideoChannelFromSercerIfNeed;
- (void)updateVideoAlbumInfo:(id)arg1;
- (void)removeVideoAlbum:(id)arg1;
- (void)updateVideoAlbumArray:(id)arg1;
@property(readonly, nonatomic) unsigned long long videoCategoryState;
- (void)requestVideoCategorysWithTitleText:(id)arg1;
- (void)appendVideoAlbum:(id)arg1;
- (_Bool)requestVideoAlbumsFromServerIfNeed;
- (id)init;
- (void)dealloc;

@end

