//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IJKAudioKit : NSObject
{
    unsigned long long _soundedVideoPlaybackCount;
    _Bool _audioSessionInitialized;
    unsigned long long _preferredCategoryOptions;
    NSObject<OS_dispatch_queue> *_updateQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(nonatomic) unsigned long long preferredCategoryOptions; // @synthesize preferredCategoryOptions=_preferredCategoryOptions;
- (void).cxx_destruct;
- (void)updateAudioPlaybackActivationState;
- (void)_updateAsyncWithAudioPlaybackState:(_Bool)arg1;
- (void)endSoundedVideoPlayback;
- (void)beginSoundedVideoPlayback;
- (_Bool)setActive:(_Bool)arg1;
- (void)setupAudioSessionAndUpdatesCategory:(_Bool)arg1;
- (void)updateCategoryToPreferred;
- (void)setupAudioSession;
- (id)init;

@end

