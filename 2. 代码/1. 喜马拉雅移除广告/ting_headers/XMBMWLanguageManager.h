//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMBMWLanguageManager : NSObject
{
    NSString *playerTitle;
    NSString *playerPlaylist;
    NSString *playerMenu;
    NSString *playerFavourite;
    NSString *playerFavourited;
    NSString *playerDisFavourite;
    NSString *playerDownload;
    NSString *playerDownloaded;
    NSString *playerSequence;
    NSString *playerShuffle;
    NSString *playerSingle;
    NSString *playerPrev;
    NSString *playerNext;
    NSString *menuDownload;
    NSString *menuSubscribe;
    NSString *menuHistory;
    NSString *menuPopular;
    NSString *menuRecommendation;
    NSString *prevPage;
    NSString *nextPage;
    NSString *loading;
    NSString *loadFail;
    NSString *noLogin;
    NSString *noNet;
    NSString *playOver;
    NSString *noPlayingData;
    NSString *noDownload;
    NSString *noHistory;
    NSString *noSubscribe;
    NSString *safeNote;
    NSString *skip;
    NSString *noNetWork;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(copy, nonatomic) NSString *noNetWork; // @synthesize noNetWork;
@property(copy, nonatomic) NSString *skip; // @synthesize skip;
@property(copy, nonatomic) NSString *safeNote; // @synthesize safeNote;
@property(copy, nonatomic) NSString *noSubscribe; // @synthesize noSubscribe;
@property(copy, nonatomic) NSString *noHistory; // @synthesize noHistory;
@property(copy, nonatomic) NSString *noDownload; // @synthesize noDownload;
@property(copy, nonatomic) NSString *noPlayingData; // @synthesize noPlayingData;
@property(copy, nonatomic) NSString *playOver; // @synthesize playOver;
@property(copy, nonatomic) NSString *noNet; // @synthesize noNet;
@property(copy, nonatomic) NSString *noLogin; // @synthesize noLogin;
@property(copy, nonatomic) NSString *loadFail; // @synthesize loadFail;
@property(copy, nonatomic) NSString *loading; // @synthesize loading;
@property(copy, nonatomic) NSString *nextPage; // @synthesize nextPage;
@property(copy, nonatomic) NSString *prevPage; // @synthesize prevPage;
@property(copy, nonatomic) NSString *menuRecommendation; // @synthesize menuRecommendation;
@property(copy, nonatomic) NSString *menuPopular; // @synthesize menuPopular;
@property(copy, nonatomic) NSString *menuHistory; // @synthesize menuHistory;
@property(copy, nonatomic) NSString *menuSubscribe; // @synthesize menuSubscribe;
@property(copy, nonatomic) NSString *menuDownload; // @synthesize menuDownload;
@property(copy, nonatomic) NSString *playerNext; // @synthesize playerNext;
@property(copy, nonatomic) NSString *playerPrev; // @synthesize playerPrev;
@property(copy, nonatomic) NSString *playerSingle; // @synthesize playerSingle;
@property(copy, nonatomic) NSString *playerShuffle; // @synthesize playerShuffle;
@property(copy, nonatomic) NSString *playerSequence; // @synthesize playerSequence;
@property(copy, nonatomic) NSString *playerDownloaded; // @synthesize playerDownloaded;
@property(copy, nonatomic) NSString *playerDownload; // @synthesize playerDownload;
@property(copy, nonatomic) NSString *playerDisFavourite; // @synthesize playerDisFavourite;
@property(copy, nonatomic) NSString *playerFavourited; // @synthesize playerFavourited;
@property(copy, nonatomic) NSString *playerFavourite; // @synthesize playerFavourite;
@property(copy, nonatomic) NSString *playerMenu; // @synthesize playerMenu;
@property(copy, nonatomic) NSString *playerPlaylist; // @synthesize playerPlaylist;
@property(copy, nonatomic) NSString *playerTitle; // @synthesize playerTitle;
- (void).cxx_destruct;
- (void)setLanguageType:(long long)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

