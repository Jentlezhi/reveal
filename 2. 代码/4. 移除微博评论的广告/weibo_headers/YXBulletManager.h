//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, YXBulletView;

@interface YXBulletManager : NSObject
{
    _Bool _bStarted;
    _Bool _bStopAnimation;
    NSMutableArray *_allComments;
    NSMutableArray *_tmpComments;
    NSMutableArray *_bulletQueue;
    NSString *_comment;
    YXBulletView *_bulletView;
    CDUnknownBlockType _generateBulletBlock;
    long long _trajectory;
    long long _oldIndex;
}

+ (id)shardBulletManager;
@property(nonatomic) long long oldIndex; // @synthesize oldIndex=_oldIndex;
@property(nonatomic) long long trajectory; // @synthesize trajectory=_trajectory;
@property _Bool bStopAnimation; // @synthesize bStopAnimation=_bStopAnimation;
@property _Bool bStarted; // @synthesize bStarted=_bStarted;
@property(copy, nonatomic) CDUnknownBlockType generateBulletBlock; // @synthesize generateBulletBlock=_generateBulletBlock;
@property(retain, nonatomic) YXBulletView *bulletView; // @synthesize bulletView=_bulletView;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSMutableArray *bulletQueue; // @synthesize bulletQueue=_bulletQueue;
@property(retain, nonatomic) NSMutableArray *tmpComments; // @synthesize tmpComments=_tmpComments;
@property(retain, nonatomic) NSMutableArray *allComments; // @synthesize allComments=_allComments;
- (void).cxx_destruct;
- (void)dealloc;
- (id)nextComment;
- (void)removeAllBullet;
- (void)initBulletCommentViewWithComment:(id)arg1 imageUrl:(id)arg2 userName:(id)arg3 trajectory:(long long)arg4 grade:(long long)arg5 vtype:(long long)arg6 memberid:(id)arg7 duration:(double)arg8 loveRegimentalNum:(long long)arg9 loveRegimentalName:(id)arg10 isAnnoy:(int)arg11 msgFrom:(int)arg12 noble_level:(long long)arg13 giftModel:(id)arg14;
- (void)createBulletComment:(id)arg1 imageUrl:(id)arg2 userName:(id)arg3 trajectory:(long long)arg4 grade:(long long)arg5 vtype:(long long)arg6 memberid:(id)arg7 duration:(double)arg8 loveRegimentalNum:(long long)arg9 loveRegimentalName:(id)arg10 isAnnoy:(int)arg11 msgFrom:(int)arg12 noble_level:(long long)arg13 giftModel:(id)arg14;
- (void)stop;
- (void)startWithComment:(id)arg1 imageUrl:(id)arg2 userName:(id)arg3 grade:(long long)arg4 vtype:(long long)arg5 memberid:(id)arg6 duration:(double)arg7 loveRegimentalNum:(long long)arg8 loveRegimentalName:(id)arg9 isAnnoy:(int)arg10 msgFrom:(int)arg11 noble_level:(long long)arg12 giftModel:(id)arg13;

@end

