//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBRect;

@interface WBResultHand : NSObject
{
    float _fScore;
    unsigned long long _iAction;
    WBRect *_handRect;
    struct CGPoint _keyPoint;
}

@property(nonatomic) struct CGPoint keyPoint; // @synthesize keyPoint=_keyPoint;
@property(retain, nonatomic) WBRect *handRect; // @synthesize handRect=_handRect;
@property(nonatomic) unsigned long long iAction; // @synthesize iAction=_iAction;
@property(nonatomic) float fScore; // @synthesize fScore=_fScore;
- (void).cxx_destruct;

@end

