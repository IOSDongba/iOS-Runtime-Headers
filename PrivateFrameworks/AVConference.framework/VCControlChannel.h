/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCControlChannel : VCObject {
    NSObject<OS_dispatch_queue> * _asyncProcessingQueue;
    int  _bytesReceived;
    int  _bytesReceivedToReport;
    int  _bytesSent;
    int  _bytesSentToReport;
    int  _lastProcessedBytesReceived;
    int  _lastProcessedBytesSent;
    double  _lastUpdateTimestamp;
    int  _maxReceivedRate;
    int  _maxSentRate;
    id  _messageReceivedDelegate;
    int  _minReceivedRate;
    int  _minSentRate;
}

@property (nonatomic) id messageReceivedDelegate;

- (void)broadcastUnreliableMessage:(id)arg1;
- (void)dealloc;
- (void)flushActiveMessages;
- (id)init;
- (id)messageReceivedDelegate;
- (void)sendReliableMessage:(id)arg1;
- (void)sendReliableMessage:(id)arg1 participantID:(unsigned long long)arg2;
- (bool)sendReliableMessageAndWait:(id)arg1;
- (bool)sendReliableMessageAndWait:(id)arg1 participantID:(unsigned long long)arg2;
- (void)sendUnreliableMessage:(id)arg1 participantID:(unsigned long long)arg2;
- (void)setMessageReceivedDelegate:(id)arg1;
- (void)throwNotSupportedExceptionForMethod:(id)arg1;

@end