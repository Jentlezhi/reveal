//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMDubDotInfo : XMModel
{
    _Bool _showName;
    _Bool _nameHighlighted;
    long long _dotId;
    long long _roleId;
    NSString *_roleName;
    double _beginPos;
    double _endPos;
    NSString *_content;
    double _waitPercent;
    double _vovalAudioScore;
}

@property(nonatomic) double vovalAudioScore; // @synthesize vovalAudioScore=_vovalAudioScore;
@property(nonatomic) double waitPercent; // @synthesize waitPercent=_waitPercent;
@property(nonatomic) _Bool nameHighlighted; // @synthesize nameHighlighted=_nameHighlighted;
@property(nonatomic) _Bool showName; // @synthesize showName=_showName;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) double endPos; // @synthesize endPos=_endPos;
@property(nonatomic) double beginPos; // @synthesize beginPos=_beginPos;
@property(retain, nonatomic) NSString *roleName; // @synthesize roleName=_roleName;
@property(nonatomic) long long roleId; // @synthesize roleId=_roleId;
@property(nonatomic) long long dotId; // @synthesize dotId=_dotId;
- (void).cxx_destruct;

@end

