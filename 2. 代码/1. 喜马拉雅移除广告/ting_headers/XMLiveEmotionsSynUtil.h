//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XMNRequest, YYThreadSafeArray;

@interface XMLiveEmotionsSynUtil : NSObject
{
    double _lastLoadStamp;
    YYThreadSafeArray *_liveEmotions;
    YYThreadSafeArray *_myEmotions;
    YYThreadSafeArray *_micEmotions;
    XMNRequest *_nRequest;
    XMNRequest *_loadMyReq;
}

+ (id)sharedUtil;
- (void).cxx_destruct;
@property(retain, nonatomic) XMNRequest *loadMyReq; // @synthesize loadMyReq=_loadMyReq;
@property(retain, nonatomic) XMNRequest *nRequest; // @synthesize nRequest=_nRequest;
@property(retain, nonatomic) YYThreadSafeArray *micEmotions; // @synthesize micEmotions=_micEmotions;
@property(retain, nonatomic) YYThreadSafeArray *myEmotions; // @synthesize myEmotions=_myEmotions;
@property(retain, nonatomic) YYThreadSafeArray *liveEmotions; // @synthesize liveEmotions=_liveEmotions;
- (void)synTemplateEmotions:(_Bool)arg1 type:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)synMicTemplateEmotionsWithType:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)synMicTemplateEmotions:(CDUnknownBlockType)arg1;
- (void)synLiveTemplateEmotions:(CDUnknownBlockType)arg1;
- (void)loadMyEmotions:(CDUnknownBlockType)arg1;
- (id)emojiForEmojiId:(long long)arg1 showTemplateId:(long long)arg2 from:(id)arg3;
- (id)emojiForEmojiId:(long long)arg1 showTemplateId:(long long)arg2 andShowType:(long long)arg3;
- (void)_parseMyEmojis:(id)arg1;
- (void)_parseMicData:(id)arg1;
- (void)_parseLiveGroupData:(id)arg1;
- (void)loadFromLocal;
- (id)init;

@end

