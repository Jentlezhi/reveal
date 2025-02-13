//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface XMUBTDialogBindingManager : NSObject
{
    NSMutableDictionary *_elementBindingsByName;
    NSMutableDictionary *_dialogDic;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *dialogDic; // @synthesize dialogDic=_dialogDic;
@property(retain, nonatomic) NSMutableDictionary *elementBindingsByName; // @synthesize elementBindingsByName=_elementBindingsByName;
- (void).cxx_destruct;
- (void)addElementBindingForDialog:(id)arg1;
- (void)tryTrackDialog:(id)arg1;
- (void)updateDialogs:(id)arg1;
- (id)init;

@end

