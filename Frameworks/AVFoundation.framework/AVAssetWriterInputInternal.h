/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputHelper, AVWeakReference, NSObject<OS_dispatch_queue>;

@interface AVAssetWriterInputInternal : NSObject {
    NSObject<OS_dispatch_queue> *appendFailureReadWriteQueue;
    BOOL attachedToPixelBufferAdaptor;
    AVAssetWriterInputHelper *helper;
    NSObject<OS_dispatch_queue> *helperQueue;
    int numberOfAppendFailures;
    AVWeakReference *weakReference;
    AVWeakReference *weakReferenceToAssetWriter;
}

@end
