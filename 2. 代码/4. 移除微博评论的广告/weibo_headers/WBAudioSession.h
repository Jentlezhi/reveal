//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBAudioSession : NSObject
{
}

+ (id)sharedSession;
- (_Bool)removeProperty:(unsigned int)arg1 listener:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 error:(id *)arg4;
- (_Bool)addProperty:(unsigned int)arg1 listener:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 error:(id *)arg4;
- (_Bool)setActive:(_Bool)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setCategory:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)p_errorOSStatus:(int)arg1 error:(id *)arg2;
- (void)p_initializeAudioSession;
- (id)init;
- (void)removeAudioSessionRouteProperty;
- (void)registerAudioSessionRouteProperty;

@end

