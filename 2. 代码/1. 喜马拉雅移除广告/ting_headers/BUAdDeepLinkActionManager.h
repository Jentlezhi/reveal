//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BUAdDeepLinkActionManager : NSObject
{
    _Bool _hasEnterBackground;
}

+ (id)sharedManager;
@property(nonatomic) _Bool hasEnterBackground; // @synthesize hasEnterBackground=_hasEnterBackground;
- (void)appDidEnterBackgroundNotification;
- (_Bool)handleActionWithModel:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)init;

@end

